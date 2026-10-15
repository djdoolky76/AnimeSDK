#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLOHPFEHNPK;
namespace RPG::Client { class GridFightGameFormation; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define FFIDPLNGGIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15735B00)
#define FFIDPLNGGIG_HGNOFKIAFAA_OFFSET UNITYSDK_OFFSET(0x15734300)
#define FFIDPLNGGIG_INEJGHNGIEC_OFFSET UNITYSDK_OFFSET(0x15735370)
#define FFIDPLNGGIG_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x15733D60)
#define FFIDPLNGGIG_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x15734DD0)
#define FFIDPLNGGIG_NLEKLPKJNAF_OFFSET UNITYSDK_OFFSET(0x15734B40)
#define FFIDPLNGGIG_OAJLINPFPAD_OFFSET UNITYSDK_OFFSET(0x15735740)

inline static constexpr unsigned int FFIDPLNGGIG_TypeDefinitionIndex = 64623;

	class FFIDPLNGGIG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIDPLNGGIG_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* LBIHOLKGMIB(::RPG::Client::GridFightGameFormation* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + FFIDPLNGGIG_LBIHOLKGMIB_OFFSET))(this, a1);
		}

		::System::Void NJKHGPCDAMI(::RPG::Client::GridFightGameFormation* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FFIDPLNGGIG_NJKHGPCDAMI_OFFSET))(this, a1, a2);
		}

		static ::System::Void HGNOFKIAFAA(::System::IO::BinaryWriter* a1, ::BLOHPFEHNPK* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::BLOHPFEHNPK*))((::PBYTE)hIl2Cpp + FFIDPLNGGIG_HGNOFKIAFAA_OFFSET))(a1, a2);
		}

		static ::System::Void INEJGHNGIEC(::System::IO::BinaryReader* a1, ::BLOHPFEHNPK* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryReader*, ::BLOHPFEHNPK*))((::PBYTE)hIl2Cpp + FFIDPLNGGIG_INEJGHNGIEC_OFFSET))(a1, a2);
		}

		static ::System::Void NLEKLPKJNAF(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FFIDPLNGGIG_NLEKLPKJNAF_OFFSET))(a1, a2);
		}

		static ::System::Void OAJLINPFPAD(::System::IO::BinaryReader* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryReader*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FFIDPLNGGIG_OAJLINPFPAD_OFFSET))(a1, a2);
		}

	};
