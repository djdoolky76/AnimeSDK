#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RECORDKIT_CONTAINKEY_OFFSET UNITYSDK_OFFSET(0x1F2DC000)
#define RECORDKIT_DELETEALL_OFFSET UNITYSDK_OFFSET(0x1F2DC440)
#define RECORDKIT_DELETE_OFFSET UNITYSDK_OFFSET(0x1F2DC260)
#define RECORDKIT_GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F2DC220)
#define RECORDKIT_GET_RECORDROOTPATH_OFFSET UNITYSDK_OFFSET(0x1F2DBE20)
#define RECORDKIT_SAVE_OFFSET UNITYSDK_OFFSET(0x1F2DC570)
#define RECORDKIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2DC6F0)
#define RECORDKIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2DC6E0)

inline static constexpr unsigned int RecordKit_TypeDefinitionIndex = 8673;

class RecordKit : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_recordDic()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(RecordKit_TypeDefinitionIndex)->GetStaticField(0x6B10);
	}
	static ::System::String** StaticGet_m_recordPath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RecordKit_TypeDefinitionIndex)->GetStaticField(0x6B18);
	}
	// static const ::System::String* EXTENSION; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORDKIT__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RECORDKIT__CCTOR_OFFSET))();
	}

	static ::System::String* get_RecordRootPath()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RECORDKIT_GET_RECORDROOTPATH_OFFSET))();
	}

	static ::System::Boolean ContainKey(::System::String* key)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RECORDKIT_CONTAINKEY_OFFSET))(key);
	}

	static ::System::Void Delete(::System::String* key)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RECORDKIT_DELETE_OFFSET))(key);
	}

	static ::System::Void DeleteAll()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RECORDKIT_DELETEALL_OFFSET))();
	}

	static ::System::Void Save(::System::String* uid)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RECORDKIT_SAVE_OFFSET))(uid);
	}

	static ::System::String* GetUniqueID(::System::String* key)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RECORDKIT_GETUNIQUEID_OFFSET))(key);
	}
};
