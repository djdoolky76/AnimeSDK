#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class VoracityInvasionFightEntranceData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JLFCOGDFAOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x17B45A90)
#define JLFCOGDFAOO_FOCBHOFDOIM_OFFSET UNITYSDK_OFFSET(0x17B457D0)

inline static constexpr unsigned int JLFCOGDFAOO_TypeDefinitionIndex = 70208;

	class JLFCOGDFAOO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_FFLIALCHAIO()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("", "JLFCOGDFAOO")->GetStaticField(0x17D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLFCOGDFAOO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionFightEntranceData*>* FOCBHOFDOIM()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionFightEntranceData*>*(*)())((::PBYTE)hIl2Cpp + JLFCOGDFAOO_FOCBHOFDOIM_OFFSET))();
		}

	};
