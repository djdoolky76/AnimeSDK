#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class CCJBHAPJLEL;
class FCOEMCEDLNL;
class NCOOOFILFOE;

#define CCJBHAPJLEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA0CDA0)
#define CCJBHAPJLEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA0CC00)

	class CCJBHAPJLEL : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::BMAGJGLPIIF>* OGNBBKOJJOL; // 0x10
		::Il2CppArray<::NCOOOFILFOE*>* BMMCDIJNDLP; // 0x18
		::System::UInt64 DEKLOHIDHCO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJBHAPJLEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CCJBHAPJLEL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CCJBHAPJLEL*))((::PBYTE)hIl2Cpp + CCJBHAPJLEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
