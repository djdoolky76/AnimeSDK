#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLOHPFEHNPK;
namespace RPG::Client { class GridFightGameFormation; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define GMFEBKMEKIB_CTOR_OFFSET UNITYSDK_OFFSET(0x15ACDAA0)
#define GMFEBKMEKIB_HGNOFKIAFAA_OFFSET UNITYSDK_OFFSET(0x15ACBFF0)
#define GMFEBKMEKIB_INEJGHNGIEC_OFFSET UNITYSDK_OFFSET(0x15ACD340)
#define GMFEBKMEKIB_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x15ACBB50)
#define GMFEBKMEKIB_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x15ACCD70)
#define GMFEBKMEKIB_NLEKLPKJNAF_OFFSET UNITYSDK_OFFSET(0x15ACC7E0)
#define GMFEBKMEKIB_OAJLINPFPAD_OFFSET UNITYSDK_OFFSET(0x15ACD790)

	class GMFEBKMEKIB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFEBKMEKIB_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* LBIHOLKGMIB(::RPG::Client::GridFightGameFormation* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + GMFEBKMEKIB_LBIHOLKGMIB_OFFSET))(this, a1);
		}

		::System::Void NJKHGPCDAMI(::RPG::Client::GridFightGameFormation* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GMFEBKMEKIB_NJKHGPCDAMI_OFFSET))(this, a1, a2);
		}

		static ::System::Void HGNOFKIAFAA(::System::IO::BinaryWriter* a1, ::BLOHPFEHNPK* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::BLOHPFEHNPK*))((::PBYTE)hIl2Cpp + GMFEBKMEKIB_HGNOFKIAFAA_OFFSET))(a1, a2);
		}

		static ::System::Void INEJGHNGIEC(::System::IO::BinaryReader* a1, ::BLOHPFEHNPK* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryReader*, ::BLOHPFEHNPK*))((::PBYTE)hIl2Cpp + GMFEBKMEKIB_INEJGHNGIEC_OFFSET))(a1, a2);
		}

		static ::System::Void NLEKLPKJNAF(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GMFEBKMEKIB_NLEKLPKJNAF_OFFSET))(a1, a2);
		}

		static ::System::Void OAJLINPFPAD(::System::IO::BinaryReader* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryReader*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GMFEBKMEKIB_OAJLINPFPAD_OFFSET))(a1, a2);
		}

	};
