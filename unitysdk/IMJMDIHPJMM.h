#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersInputActionType.h"
#include "unitysdk/System/Object.h"
class CFEFEPIDGKB;
class MDHODFHBAAO;
class PLMODIOCPAF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMJMDIHPJMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B4320)
#define IMJMDIHPJMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6B43C0)
#define IMJMDIHPJMM_HOAGKFLIINL_OFFSET UNITYSDK_OFFSET(0x1C6B4B30)
#define IMJMDIHPJMM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C6B4900)
#define IMJMDIHPJMM_MLHNJDFJFKN_OFFSET UNITYSDK_OFFSET(0x1C6B4A70)
#define IMJMDIHPJMM_OPJPBGLJPDD_OFFSET UNITYSDK_OFFSET(0x1C6B45B0)

inline static constexpr unsigned int IMJMDIHPJMM_TypeDefinitionIndex = 37112;

	class IMJMDIHPJMM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CFEFEPIDGKB*>* AKKMCBDDMKA; // 0x10
		::PLMODIOCPAF* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::PLMODIOCPAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLMODIOCPAF*))((::PBYTE)hIl2Cpp + IMJMDIHPJMM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJMDIHPJMM_DISPOSE_OFFSET))(this);
		}

		::System::Void OPJPBGLJPDD(::System::UInt32 a1, ::MDHODFHBAAO* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MDHODFHBAAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + IMJMDIHPJMM_OPJPBGLJPDD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMJMDIHPJMM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType MLHNJDFJFKN(::System::UInt32 a1)
		{
			return ((::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMJMDIHPJMM_MLHNJDFJFKN_OFFSET))(this, a1);
		}

		::CFEFEPIDGKB* HOAGKFLIINL(::System::UInt32 a1)
		{
			return ((::CFEFEPIDGKB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMJMDIHPJMM_HOAGKFLIINL_OFFSET))(this, a1);
		}

	};
