#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TutorialBlockType.h"
#include "unitysdk/System/Object.h"
class AKAEJEADPHM;

#define AKAEJEADPHM_CTOR_OFFSET UNITYSDK_OFFSET(0x19D521C0)
#define AKAEJEADPHM_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0x19D522B0)
#define AKAEJEADPHM_GAOLADBNJOB_OFFSET UNITYSDK_OFFSET(0x19D521D0)
#define AKAEJEADPHM_OKPMJOCEKBC_OFFSET UNITYSDK_OFFSET(0x19D520E0)

inline static constexpr unsigned int AKAEJEADPHM_TypeDefinitionIndex = 70176;

	class AKAEJEADPHM : public ::System::Object
	{
	public:
		::System::Boolean PKAJJPLMGPK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAEJEADPHM_CTOR_OFFSET))(this);
		}

		static ::AKAEJEADPHM* OKPMJOCEKBC(::RPG::Client::TutorialBlockType a1)
		{
			return ((::AKAEJEADPHM*(*)(::RPG::Client::TutorialBlockType))((::PBYTE)hIl2Cpp + AKAEJEADPHM_OKPMJOCEKBC_OFFSET))(a1);
		}

		static ::AKAEJEADPHM* GAOLADBNJOB()
		{
			return ((::AKAEJEADPHM*(*)())((::PBYTE)hIl2Cpp + AKAEJEADPHM_GAOLADBNJOB_OFFSET))();
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAEJEADPHM_FFHNOMIDEDE_OFFSET))(this);
		}

	};
