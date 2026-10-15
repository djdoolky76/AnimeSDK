#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DIFEEJPHMJC.h"
namespace RPG::GameCore { class ResidentPossessionConfig; }
namespace RPG::GameCore { class ResidentPossessionInfo; }
namespace RPG::GameCore { template <typename T> class StringMemoryDictionary_1; }
namespace System { class String; }

#define NNHPEGCELGM_AIHGDHAKNML_OFFSET UNITYSDK_OFFSET(0xBCAEE00)
#define NNHPEGCELGM_CTOR_OFFSET UNITYSDK_OFFSET(0xBCAF2F0)
#define NNHPEGCELGM_HNNPNJJKJIP_OFFSET UNITYSDK_OFFSET(0xBCAEAE0)
#define NNHPEGCELGM_KOKHDJKCOCC_OFFSET UNITYSDK_OFFSET(0xBCAF180)
#define NNHPEGCELGM_ODPAPLIIDDD_OFFSET UNITYSDK_OFFSET(0xBCAF240)

inline static constexpr unsigned int NNHPEGCELGM_TypeDefinitionIndex = 57188;

	class NNHPEGCELGM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_KLFMBIKGOHO()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NNHPEGCELGM")->GetStaticField(0x53D80);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_PFCDNDJGGMB()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NNHPEGCELGM")->GetStaticField(0x53D88);
		}

		static ::RPG::GameCore::StringMemoryDictionary_1<::Il2CppArray<::RPG::GameCore::ResidentPossessionInfo*>*>** StaticGet_DLHHMLOCKIL()
		{
			return (::RPG::GameCore::StringMemoryDictionary_1<::Il2CppArray<::RPG::GameCore::ResidentPossessionInfo*>*>**)UnitySDK::FromName("", "NNHPEGCELGM")->GetStaticField(0x53D90);
		}

		static ::RPG::GameCore::ResidentPossessionConfig** StaticGet_MAHJGKFIJNM()
		{
			return (::RPG::GameCore::ResidentPossessionConfig**)UnitySDK::FromName("", "NNHPEGCELGM")->GetStaticField(0x53D98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHPEGCELGM_CTOR_OFFSET))(this);
		}

		static ::DIFEEJPHMJC HNNPNJJKJIP(::System::String* a1)
		{
			return ((::DIFEEJPHMJC(*)(::System::String*))((::PBYTE)hIl2Cpp + NNHPEGCELGM_HNNPNJJKJIP_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::GameCore::ResidentPossessionInfo*>* KOKHDJKCOCC(::DIFEEJPHMJC a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::ResidentPossessionInfo*>*(*)(::DIFEEJPHMJC))((::PBYTE)hIl2Cpp + NNHPEGCELGM_KOKHDJKCOCC_OFFSET))(a1);
		}

		static ::System::Void ODPAPLIIDDD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNHPEGCELGM_ODPAPLIIDDD_OFFSET))();
		}

		static ::System::Void AIHGDHAKNML()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNHPEGCELGM_AIHGDHAKNML_OFFSET))();
		}

	};
