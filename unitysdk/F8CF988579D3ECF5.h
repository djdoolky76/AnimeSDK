#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class F4FEF1AD6C51B7DC;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define F8CF988579D3ECF5_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1CD0170)
#define F8CF988579D3ECF5_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1CD0330)
#define F8CF988579D3ECF5__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int F8CF988579D3ECF5_TypeDefinitionIndex = 9792;

class F8CF988579D3ECF5 : public ::EFC4AEA2121EC272
{
public:
	::UnityEngine::UI::Image* E207ED83354041E8; // 0x80
	::ABC::UI::MonoLocalizedTmp* FE8AE23517CC4EDA; // 0x88
	::ABC::UI::MonoLocalizedTmp* F6BBE40313CF5312; // 0x90
	::ABC::UI::MonoLocalizedTmp* F13BF4B8FCFE3534; // 0x98
	::UnityEngine::UI::Image* FB6C370BE92DD4EB; // 0xA0
	::UnityEngine::GameObject* BCB26428FCE0CF91; // 0xA8

	::System::Void EC3033C0485522FB(::F4FEF1AD6C51B7DC* B2A1A3072A6359F8)
	{
		return ((::System::Void(*)(::PVOID, ::F4FEF1AD6C51B7DC*))((::PBYTE)hIl2Cpp + F8CF988579D3ECF5_EC3033C0485522FB_OFFSET))(this, B2A1A3072A6359F8);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* E32DFA894DBD320D)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + F8CF988579D3ECF5_A54D936318FAF9E3_OFFSET))(this, E32DFA894DBD320D);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8CF988579D3ECF5__CTOR_OFFSET))(this);
	}
};
