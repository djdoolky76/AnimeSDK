#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define NACNFDPHAAG___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE7180)
#define NACNFDPHAAG___C__DISPLAYCLASS3_0__GETCURSWITCHNAME_B__0_OFFSET UNITYSDK_OFFSET(0x1BAE7380)

inline static constexpr unsigned int NACNFDPHAAG___c__DisplayClass3_0_TypeDefinitionIndex = 66955;

	class NACNFDPHAAG___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACNFDPHAAG___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCurSwitchName_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + NACNFDPHAAG___C__DISPLAYCLASS3_0__GETCURSWITCHNAME_B__0_OFFSET))(this, a1);
		}

	};
