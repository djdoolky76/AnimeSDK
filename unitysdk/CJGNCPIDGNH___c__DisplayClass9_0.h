#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMHEHLIFNGJ;
class MBJOEPEGLII;
namespace RPG::Client::Promises { class IPromise; }

#define CJGNCPIDGNH___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD20DE20)
#define CJGNCPIDGNH___C__DISPLAYCLASS9_0__STARTMATCH_B__0_OFFSET UNITYSDK_OFFSET(0xD211D60)

inline static constexpr unsigned int CJGNCPIDGNH___c__DisplayClass9_0_TypeDefinitionIndex = 80275;

	class CJGNCPIDGNH___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MBJOEPEGLII* session; // 0x10
		::FMHEHLIFNGJ* extInfo; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _StartMatch_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS9_0__STARTMATCH_B__0_OFFSET))(this);
		}

	};
