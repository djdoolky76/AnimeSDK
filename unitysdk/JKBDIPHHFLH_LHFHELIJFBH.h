#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGANMGEOOCC;
namespace RPG::GameCore { class GameEntity; }

#define JKBDIPHHFLH_LHFHELIJFBH_CTOR_OFFSET UNITYSDK_OFFSET(0xB211600)
#define JKBDIPHHFLH_LHFHELIJFBH_GETHPPROGRESS_OFFSET UNITYSDK_OFFSET(0xB211940)
#define JKBDIPHHFLH_LHFHELIJFBH_GETKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xB2117E0)
#define JKBDIPHHFLH_LHFHELIJFBH_GETREDIRECTINFO_OFFSET UNITYSDK_OFFSET(0xB2119E0)
#define JKBDIPHHFLH_LHFHELIJFBH_IBHDAFAGAND_OFFSET UNITYSDK_OFFSET(0xB211A30)
#define JKBDIPHHFLH_LHFHELIJFBH_IKHPFKPOBLK_OFFSET UNITYSDK_OFFSET(0xB211880)

inline static constexpr unsigned int JKBDIPHHFLH_LHFHELIJFBH_TypeDefinitionIndex = 56045;

	class JKBDIPHHFLH_LHFHELIJFBH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FLGPCFBPGNC; // 0x10
		::Il2CppArray<::System::UInt32>* EDJIFPELGGA; // 0x18
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + JKBDIPHHFLH_LHFHELIJFBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetKillProgress(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKBDIPHHFLH_LHFHELIJFBH_GETKILLPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 GetHPProgress(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKBDIPHHFLH_LHFHELIJFBH_GETHPPROGRESS_OFFSET))(this, a1);
		}

		::System::Int32 IKHPFKPOBLK(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKBDIPHHFLH_LHFHELIJFBH_IKHPFKPOBLK_OFFSET))(this, a1);
		}

		::HGANMGEOOCC* GetRedirectInfo(::RPG::GameCore::GameEntity* a1)
		{
			return ((::HGANMGEOOCC*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JKBDIPHHFLH_LHFHELIJFBH_GETREDIRECTINFO_OFFSET))(this, a1);
		}

		::System::Boolean IBHDAFAGAND(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JKBDIPHHFLH_LHFHELIJFBH_IBHDAFAGAND_OFFSET))(this, a1);
		}

	};
