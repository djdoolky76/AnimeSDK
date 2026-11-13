#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLOHPFEHNPK;
namespace RPG::Client { class GridFightGameFormation; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define FFIDPLNGGIG_AFANDMCJOEG_OFFSET UNITYSDK_OFFSET(0x130EA180)
#define FFIDPLNGGIG_AGDJMPMIJOM_OFFSET UNITYSDK_OFFSET(0x130E7710)
#define FFIDPLNGGIG_CTOR_OFFSET UNITYSDK_OFFSET(0x130EA320)
#define FFIDPLNGGIG_GBEENHJNJFL_OFFSET UNITYSDK_OFFSET(0x130E98C0)
#define FFIDPLNGGIG_HGNOFKIAFAA_OFFSET UNITYSDK_OFFSET(0x130E6920)
#define FFIDPLNGGIG_INEJGHNGIEC_OFFSET UNITYSDK_OFFSET(0x130E8970)
#define FFIDPLNGGIG_INIOLGFFEPH_OFFSET UNITYSDK_OFFSET(0x130E91D0)
#define FFIDPLNGGIG_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x130E6360)
#define FFIDPLNGGIG_NHBNFCOPIOG_OFFSET UNITYSDK_OFFSET(0x130E7440)
#define FFIDPLNGGIG_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x130E83A0)
#define FFIDPLNGGIG_NLEKLPKJNAF_OFFSET UNITYSDK_OFFSET(0x130E71B0)
#define FFIDPLNGGIG_OAJLINPFPAD_OFFSET UNITYSDK_OFFSET(0x130E8E10)
#define FFIDPLNGGIG_OIIEKADBAKO_OFFSET UNITYSDK_OFFSET(0x130E9520)
#define FFIDPLNGGIG_POOLOMBICPE_OFFSET UNITYSDK_OFFSET(0x130E9F50)

inline static constexpr unsigned int FFIDPLNGGIG_TypeDefinitionIndex = 66152;

	class FFIDPLNGGIG : public ::System::Object
	{
	public:
		// static const ::System::Object NJHEEDBAFOL; // 0x0
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

		static ::System::Void NHBNFCOPIOG(::System::IO::BinaryWriter* a1, ::RPG::Client::GridFightGameFormation* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + FFIDPLNGGIG_NHBNFCOPIOG_OFFSET))(a1, a2);
		}

		static ::System::Void GBEENHJNJFL(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FFIDPLNGGIG_GBEENHJNJFL_OFFSET))(a1, a2);
		}

		static ::System::Void INIOLGFFEPH(::RPG::Client::GridFightGameFormation* a1, ::System::IO::BinaryReader* a2, ::System::IO::MemoryStream* a3)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightGameFormation*, ::System::IO::BinaryReader*, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + FFIDPLNGGIG_INIOLGFFEPH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void POOLOMBICPE(::System::IO::BinaryReader* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryReader*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FFIDPLNGGIG_POOLOMBICPE_OFFSET))(a1, a2);
		}

		static ::System::Void AGDJMPMIJOM(::System::IO::BinaryWriter* a1, ::RPG::Client::GridFightGameFormation* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + FFIDPLNGGIG_AGDJMPMIJOM_OFFSET))(a1, a2);
		}

		static ::System::Void OIIEKADBAKO(::RPG::Client::GridFightGameFormation* a1, ::System::IO::BinaryReader* a2, ::System::IO::MemoryStream* a3)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightGameFormation*, ::System::IO::BinaryReader*, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + FFIDPLNGGIG_OIIEKADBAKO_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::BLOHPFEHNPK*>* AFANDMCJOEG(::RPG::Client::GridFightGameFormation* a1)
		{
			return ((::Il2CppArray<::BLOHPFEHNPK*>*(*)(::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + FFIDPLNGGIG_AFANDMCJOEG_OFFSET))(a1);
		}

	};
