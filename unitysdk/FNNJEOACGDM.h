#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PKHNHEBKPPI.h"
class BAFCAJNDAOJ;
class FIMAFJNMOGM;
class MBIMFJCHINA;
namespace System { class Object; }
namespace System { class String; }

#define FNNJEOACGDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x167F9AF0)
#define FNNJEOACGDM_CTOR_OFFSET UNITYSDK_OFFSET(0x167F8FE0)
#define FNNJEOACGDM_FLFEAADPAPE_OFFSET UNITYSDK_OFFSET(0x167F96F0)
#define FNNJEOACGDM_PCCKKGDHPHF_OFFSET UNITYSDK_OFFSET(0x167F93D0)
#define FNNJEOACGDM_POSTPROCESS_OFFSET UNITYSDK_OFFSET(0x167F8FF0)

inline static constexpr unsigned int FNNJEOACGDM_TypeDefinitionIndex = 67151;

	class FNNJEOACGDM : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* FBDCBFMFAOE; // 0x10
		static ::RPG::Client::TextID* StaticGet_KFGOCGLJIAH()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "FNNJEOACGDM")->GetStaticField(0x15470);
		}

		::System::Void _ctor(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + FNNJEOACGDM_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNNJEOACGDM_CCTOR_OFFSET))();
		}

		::System::String* PostProcess(::System::String* a1, ::System::Object* a2, ::FIMAFJNMOGM* a3, ::PKHNHEBKPPI a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Object*, ::FIMAFJNMOGM*, ::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + FNNJEOACGDM_POSTPROCESS_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::String* PCCKKGDHPHF(::RPG::GameCore::FixPoint a1, ::BAFCAJNDAOJ* a2, ::PKHNHEBKPPI a3)
		{
			return ((::System::String*(*)(::RPG::GameCore::FixPoint, ::BAFCAJNDAOJ*, ::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + FNNJEOACGDM_PCCKKGDHPHF_OFFSET))(a1, a2, a3);
		}

		static ::MBIMFJCHINA* FLFEAADPAPE(::BAFCAJNDAOJ* a1)
		{
			return ((::MBIMFJCHINA*(*)(::BAFCAJNDAOJ*))((::PBYTE)hIl2Cpp + FNNJEOACGDM_FLFEAADPAPE_OFFSET))(a1);
		}

	};
