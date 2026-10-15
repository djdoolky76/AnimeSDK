#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameFormation; }

#define BNNFEODFCLM_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDE8E0)
#define BNNFEODFCLM_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0xBDDB040)
#define BNNFEODFCLM_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0xBDDD780)

inline static constexpr unsigned int BNNFEODFCLM_TypeDefinitionIndex = 64624;

	class BNNFEODFCLM : public ::System::Object
	{
	public:
		// static const ::System::Object CCDIJKGJCKP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNFEODFCLM_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* LBIHOLKGMIB(::RPG::Client::GridFightGameFormation* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + BNNFEODFCLM_LBIHOLKGMIB_OFFSET))(this, a1);
		}

		::System::Void NJKHGPCDAMI(::RPG::Client::GridFightGameFormation* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BNNFEODFCLM_NJKHGPCDAMI_OFFSET))(this, a1, a2);
		}

	};
