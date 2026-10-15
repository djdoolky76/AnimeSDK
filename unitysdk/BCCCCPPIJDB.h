#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENAJMANKMBM;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define BCCCCPPIJDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBEF510)
#define BCCCCPPIJDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEF500)
#define BCCCCPPIJDB_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1EBEF210)
#define BCCCCPPIJDB_FLUSH_OFFSET UNITYSDK_OFFSET(0x1EBEEF00)
#define BCCCCPPIJDB_GET_ISPARTIALSAVE_OFFSET UNITYSDK_OFFSET(0x1EBEF390)
#define BCCCCPPIJDB_GMJLLOJAFDO_OFFSET UNITYSDK_OFFSET(0x1EBEF4D0)
#define BCCCCPPIJDB_LOAD_OFFSET UNITYSDK_OFFSET(0x1EBEEB90)
#define BCCCCPPIJDB_MAFMNMOJKAO_OFFSET UNITYSDK_OFFSET(0x1EBEEB20)

inline static constexpr unsigned int BCCCCPPIJDB_TypeDefinitionIndex = 35313;

	class BCCCCPPIJDB : public ::System::Object
	{
	public:
		static ::ENAJMANKMBM** StaticGet_HIOIMAFGBGG()
		{
			return (::ENAJMANKMBM**)UnitySDK::FromName("", "BCCCCPPIJDB")->GetStaticField(0x40600);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCCCCPPIJDB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCCCCPPIJDB_CCTOR_OFFSET))();
		}

		static ::System::Void MAFMNMOJKAO(::ENAJMANKMBM* a1)
		{
			return ((::System::Void(*)(::ENAJMANKMBM*))((::PBYTE)hIl2Cpp + BCCCCPPIJDB_MAFMNMOJKAO_OFFSET))(a1);
		}

		::System::Void Load(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + BCCCCPPIJDB_LOAD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Flush(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + BCCCCPPIJDB_FLUSH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DeleteKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BCCCCPPIJDB_DELETEKEY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPartialSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCCCCPPIJDB_GET_ISPARTIALSAVE_OFFSET))(this);
		}

		static ::ENAJMANKMBM* GMJLLOJAFDO()
		{
			return ((::ENAJMANKMBM*(*)())((::PBYTE)hIl2Cpp + BCCCCPPIJDB_GMJLLOJAFDO_OFFSET))();
		}

	};
