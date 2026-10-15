#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class CDKEBLNOEPH;
class HGCEOEHGPPE;
class HLLOGIGNGAH;
class OAPFEGCKDNG;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NBNLIDCJLHK_CTOR_OFFSET UNITYSDK_OFFSET(0xBAD6F40)
#define NBNLIDCJLHK_DOCPKCBJEBP_OFFSET UNITYSDK_OFFSET(0xBAD7510)
#define NBNLIDCJLHK_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBAD7140)
#define NBNLIDCJLHK_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xBAD6E30)
#define NBNLIDCJLHK_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBAD6F10)
#define NBNLIDCJLHK_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBAD6F00)
#define NBNLIDCJLHK_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBAD6EF0)
#define NBNLIDCJLHK_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBAD6EE0)
#define NBNLIDCJLHK_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xBAD6E80)
#define NBNLIDCJLHK_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBAD6F20)
#define NBNLIDCJLHK_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xBAD6EB0)
#define NBNLIDCJLHK_LHIBMOJONAE_OFFSET UNITYSDK_OFFSET(0xBAD7220)
#define NBNLIDCJLHK_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xBAD72B0)
#define NBNLIDCJLHK_POIPBCKGABI_OFFSET UNITYSDK_OFFSET(0xBAD7300)
#define NBNLIDCJLHK_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBAD6F30)
#define NBNLIDCJLHK__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xBAD7030)

inline static constexpr unsigned int NBNLIDCJLHK_TypeDefinitionIndex = 59468;

	class NBNLIDCJLHK
	{
	public:
		::System::Boolean _IsEnable_k__BackingField; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_GETTYPENAME_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_DefaultAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
		}

		::OAPFEGCKDNG* get_RelativePath()
		{
			return ((::OAPFEGCKDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::String* get_BundleVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_GET_BUNDLEVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BundleManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
		}

		::System::String* get_BlockVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_GET_BLOCKVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BlockManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_GET_BLOCKMANIFESTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_SET_ISENABLE_OFFSET))(this, a1);
		}

		::HLLOGIGNGAH* _LoadIndexInfo(::System::String* a1)
		{
			return ((::HLLOGIGNGAH*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NBNLIDCJLHK__LOADINDEXINFO_OFFSET))(this, a1);
		}

		::System::Boolean GetServerBlockManifestName(::System::String* a1, ::RPG::Client::ByteHash16 a2, ::System::Int64 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* LHIBMOJONAE(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_LHIBMOJONAE_OFFSET))(this, a1);
		}

		::System::Void OnAllSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_ONALLSUCCEED_OFFSET))(this);
		}

		::System::Void POIPBCKGABI(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_POIPBCKGABI_OFFSET))(this, a1);
		}

		::System::Void DOCPKCBJEBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK_DOCPKCBJEBP_OFFSET))(this);
		}

	};
