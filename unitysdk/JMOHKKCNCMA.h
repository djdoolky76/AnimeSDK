#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleHpType.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/System/Object.h"
class AOMMEMBHKKG;
class FBDPOPBPHKP;
class NBIBOKEFKIH;
class OFDLDALIDDN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMOHKKCNCMA_BMDIIDGIBOM_1_OFFSET UNITYSDK_OFFSET(0x1CB75180)
#define JMOHKKCNCMA_BMDIIDGIBOM_OFFSET UNITYSDK_OFFSET(0x1CB750C0)
#define JMOHKKCNCMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB78140)
#define JMOHKKCNCMA_FNNEDMINHMF_OFFSET UNITYSDK_OFFSET(0x1CB75400)
#define JMOHKKCNCMA_MAMLBKDOPGJ_1_OFFSET UNITYSDK_OFFSET(0x1CB75210)
#define JMOHKKCNCMA_MAMLBKDOPGJ_OFFSET UNITYSDK_OFFSET(0x1CB75060)
#define JMOHKKCNCMA_MGOGOPEFNJA_OFFSET UNITYSDK_OFFSET(0x1CB75510)
#define JMOHKKCNCMA_MNJMNDKEOKD_OFFSET UNITYSDK_OFFSET(0x1CB780A0)
#define JMOHKKCNCMA_NAOLHHGJMLO_OFFSET UNITYSDK_OFFSET(0x1CB665F0)
#define JMOHKKCNCMA_NGMJFNFFCLO_OFFSET UNITYSDK_OFFSET(0x1CB62140)

inline static constexpr unsigned int JMOHKKCNCMA_TypeDefinitionIndex = 43162;

	class JMOHKKCNCMA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ALIDICNGLGL; // 0x10
		::AOMMEMBHKKG* ALPKKNKAFBG; // 0x18
		::NBIBOKEFKIH* EOBLJJBOBIN; // 0x20
		::FBDPOPBPHKP* BEGKIKOGEOD; // 0x28
		::Il2CppArray<::NBIBOKEFKIH*>* KPJHIOKBJEI; // 0x30
		::NBIBOKEFKIH* IHIEIEHJJIN; // 0x38
		::NBIBOKEFKIH* JNICAKGMMPI; // 0x40
		::System::Collections::Generic::List_1<::NBIBOKEFKIH*>* HGCNLFIMDKL; // 0x48
		::OFDLDALIDDN* PNIDCBNNGDC; // 0x50
		::FBDPOPBPHKP* DLAKJKEADPN; // 0x58
		::System::Int32 GBCJCAKBMAI; // 0x60
		::System::UInt32 GHMHMKINNEJ; // 0x64
		::RPG::Client::LittleGame::Marble::MarbleHpType FGKNABDECLA; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOHKKCNCMA_CTOR_OFFSET))(this);
		}

		::System::Int32 NAOLHHGJMLO(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + JMOHKKCNCMA_NAOLHHGJMLO_OFFSET))(this, a1, a2);
		}

		::System::Single BMDIIDGIBOM(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + JMOHKKCNCMA_BMDIIDGIBOM_OFFSET))(this, a1, a2);
		}

		static ::System::Single BMDIIDGIBOM_1(::System::String* a1, ::System::Single a2, ::Il2CppArray<::System::Single>* a3, ::System::UInt32 a4)
		{
			return ((::System::Single(*)(::System::String*, ::System::Single, ::Il2CppArray<::System::Single>*, ::System::UInt32))((::PBYTE)hIl2Cpp + JMOHKKCNCMA_BMDIIDGIBOM_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean MAMLBKDOPGJ(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + JMOHKKCNCMA_MAMLBKDOPGJ_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean MAMLBKDOPGJ_1(::System::String* a1, ::Il2CppArray<::System::Single>* a2, ::System::UInt32 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Single>*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + JMOHKKCNCMA_MAMLBKDOPGJ_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean FNNEDMINHMF(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + JMOHKKCNCMA_FNNEDMINHMF_OFFSET))(a1, a2);
		}

		::NBIBOKEFKIH* NGMJFNFFCLO(::RPG::GameCore::MarbleTarget a1)
		{
			return ((::NBIBOKEFKIH*(*)(::PVOID, ::RPG::GameCore::MarbleTarget))((::PBYTE)hIl2Cpp + JMOHKKCNCMA_NGMJFNFFCLO_OFFSET))(this, a1);
		}

		::Il2CppArray<::NBIBOKEFKIH*>* MGOGOPEFNJA(::RPG::GameCore::MarbleTarget a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::NBIBOKEFKIH*>*(*)(::PVOID, ::RPG::GameCore::MarbleTarget, ::System::Boolean))((::PBYTE)hIl2Cpp + JMOHKKCNCMA_MGOGOPEFNJA_OFFSET))(this, a1, a2);
		}

		::FBDPOPBPHKP* MNJMNDKEOKD()
		{
			return ((::FBDPOPBPHKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOHKKCNCMA_MNJMNDKEOKD_OFFSET))(this);
		}

	};
