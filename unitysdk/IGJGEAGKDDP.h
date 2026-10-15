#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPLOFONGBGI;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IGJGEAGKDDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6A7140)
#define IGJGEAGKDDP_EEFMMMJEBJG_OFFSET UNITYSDK_OFFSET(0x1C6A7040)

inline static constexpr unsigned int IGJGEAGKDDP_TypeDefinitionIndex = 37368;

	class IGJGEAGKDDP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_BJCJKJMCDHO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("", "IGJGEAGKDDP")->GetStaticField(0xF6D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGJGEAGKDDP_CCTOR_OFFSET))();
		}

		static ::GPLOFONGBGI* EEFMMMJEBJG(::RPG::GameCore::CakeRaceActionBase* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::GPLOFONGBGI*(*)(::RPG::GameCore::CakeRaceActionBase*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + IGJGEAGKDDP_EEFMMMJEBJG_OFFSET))(a1, a2);
		}

	};
