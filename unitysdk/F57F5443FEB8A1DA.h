#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Image; }

#define F57F5443FEB8A1DA_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1AB5FA0)
#define F57F5443FEB8A1DA_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x1AB5ED0)
#define F57F5443FEB8A1DA_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1AB62F0)
#define F57F5443FEB8A1DA_F52E921108621A5A_OFFSET UNITYSDK_OFFSET(0x1AB6280)
#define F57F5443FEB8A1DA_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1AB6230)
#define F57F5443FEB8A1DA__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int F57F5443FEB8A1DA_TypeDefinitionIndex = 1952;

class F57F5443FEB8A1DA : public ::EFC4AEA2121EC272
{
public:
	::System::UInt32 E881F32A614D31BB; // 0x80
	::System::Byte _padding0[0x4];
	::System::Action_1<::System::UInt32>* FCE433A2B55AAAB6; // 0x88
	::UnityEngine::UI::Image* BE8B00C796036193; // 0x90
	::ABC::UI::MonoButton* F0889B8BA5C1E1DB; // 0x98
	::UnityEngine::Animator* FFE2492AA29E76AC; // 0xA0
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0xA8
	::ABC::UI::MonoLocalizedTmp* A923A2EE455304CC; // 0xB0
	::ABC::UI::MonoButton* A1B72872965160CC; // 0xB8
	::UnityEngine::UI::Image* F6D17A3F42E58D72; // 0xC0

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + F57F5443FEB8A1DA_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F57F5443FEB8A1DA_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 B06DBFAF361DD37E, ::System::Action_1<::System::UInt32>* B315A571C63B124A)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + F57F5443FEB8A1DA_EC3033C0485522FB_OFFSET))(this, B06DBFAF361DD37E, B315A571C63B124A);
	}

	::System::Void F52E921108621A5A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F57F5443FEB8A1DA_F52E921108621A5A_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F57F5443FEB8A1DA_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F57F5443FEB8A1DA__CTOR_OFFSET))(this);
	}
};
