#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBCGMHJKLNK;
namespace RPG::Client { class LuaBundleUpdatedPathInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBCGMHJKLNK_AIFJLBIEPFA_OFFSET UNITYSDK_OFFSET(0x13A9B060)
#define EBCGMHJKLNK_ALKOBKGOJMK_OFFSET UNITYSDK_OFFSET(0x13A9B1F0)
#define EBCGMHJKLNK_COGKDECFFJH_OFFSET UNITYSDK_OFFSET(0x13A9B390)
#define EBCGMHJKLNK_CTOR_OFFSET UNITYSDK_OFFSET(0x13A9A760)
#define EBCGMHJKLNK_DIMDMCMNNPF_OFFSET UNITYSDK_OFFSET(0x13A9B480)
#define EBCGMHJKLNK_GEMLOJPNCFJ_OFFSET UNITYSDK_OFFSET(0x13A9B9D0)
#define EBCGMHJKLNK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x13A9A830)
#define EBCGMHJKLNK_IEODDCNMNNN_OFFSET UNITYSDK_OFFSET(0x13A9AC90)
#define EBCGMHJKLNK_ILEGCLDLOKD_OFFSET UNITYSDK_OFFSET(0x13A9A950)
#define EBCGMHJKLNK_KCEGBEGECNN_OFFSET UNITYSDK_OFFSET(0x13A9A870)
#define EBCGMHJKLNK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x13A9A7F0)
#define EBCGMHJKLNK_LMMDGCEBJNO_OFFSET UNITYSDK_OFFSET(0x13A9B7E0)

inline static constexpr unsigned int EBCGMHJKLNK_TypeDefinitionIndex = 62620;

	class EBCGMHJKLNK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::LuaBundleUpdatedPathInfoItem*>* HAPACHKBGGC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCGMHJKLNK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCGMHJKLNK_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCGMHJKLNK_HADOHLNHHGB_OFFSET))(this);
		}

		::RPG::Client::LuaBundleUpdatedPathInfoItem* KCEGBEGECNN(::System::String* a1)
		{
			return ((::RPG::Client::LuaBundleUpdatedPathInfoItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBCGMHJKLNK_KCEGBEGECNN_OFFSET))(this, a1);
		}

		::System::Void ILEGCLDLOKD(::System::Collections::Generic::List_1<::RPG::Client::LuaBundleUpdatedPathInfoItem*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LuaBundleUpdatedPathInfoItem*>*, ::System::String*))((::PBYTE)hIl2Cpp + EBCGMHJKLNK_ILEGCLDLOKD_OFFSET))(this, a1, a2);
		}

		::System::Void IEODDCNMNNN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBCGMHJKLNK_IEODDCNMNNN_OFFSET))(this, a1);
		}

		::RPG::Client::LuaBundleUpdatedPathInfoItem* AIFJLBIEPFA(::System::String* a1)
		{
			return ((::RPG::Client::LuaBundleUpdatedPathInfoItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBCGMHJKLNK_AIFJLBIEPFA_OFFSET))(this, a1);
		}

		::System::Void ALKOBKGOJMK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBCGMHJKLNK_ALKOBKGOJMK_OFFSET))(this, a1);
		}

		::System::Void COGKDECFFJH(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EBCGMHJKLNK_COGKDECFFJH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* DIMDMCMNNPF(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBCGMHJKLNK_DIMDMCMNNPF_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* LMMDGCEBJNO()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + EBCGMHJKLNK_LMMDGCEBJNO_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::LuaBundleUpdatedPathInfoItem*>* GEMLOJPNCFJ(::EBCGMHJKLNK* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LuaBundleUpdatedPathInfoItem*>*(*)(::PVOID, ::EBCGMHJKLNK*))((::PBYTE)hIl2Cpp + EBCGMHJKLNK_GEMLOJPNCFJ_OFFSET))(this, a1);
		}

	};
