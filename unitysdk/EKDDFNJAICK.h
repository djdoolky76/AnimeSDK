#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PacketStatus.h"
#include "unitysdk/System/Object.h"
class GHIOLFLBBHD;
namespace RPG::Client { class NetPacket; }
namespace System::IO { class MemoryStream; }

#define EKDDFNJAICK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9A7D0)
#define EKDDFNJAICK_JDHODKCLGCF_OFFSET UNITYSDK_OFFSET(0x1DDAA840)
#define EKDDFNJAICK_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1DD9AC60)
#define EKDDFNJAICK_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1DDAB1B0)

	class EKDDFNJAICK : public ::System::Object
	{
	public:
		::System::IO::MemoryStream* FNJAAAICEPM; // 0x10
		::GHIOLFLBBHD* HBDEAALOGJG; // 0x18
		::System::IO::MemoryStream* LKHIIFIOOBN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDDFNJAICK_CTOR_OFFSET))(this);
		}

		::System::Void JDHODKCLGCF(::GHIOLFLBBHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHIOLFLBBHD*))((::PBYTE)hIl2Cpp + EKDDFNJAICK_JDHODKCLGCF_OFFSET))(this, a1);
		}

		::System::IO::MemoryStream* LBIHOLKGMIB(::RPG::Client::NetPacket* a1)
		{
			return ((::System::IO::MemoryStream*(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + EKDDFNJAICK_LBIHOLKGMIB_OFFSET))(this, a1);
		}

		::RPG::Client::NetPacket* NJKHGPCDAMI(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::PacketStatus a4)
		{
			return ((::RPG::Client::NetPacket*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::RPG::Client::PacketStatus))((::PBYTE)hIl2Cpp + EKDDFNJAICK_NJKHGPCDAMI_OFFSET))(this, a1, a2, a3, a4);
		}

	};
