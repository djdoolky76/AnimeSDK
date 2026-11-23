#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Image; }

#define F07EA273566FF9D0_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1FACE80)
#define F07EA273566FF9D0_B99F81FFF182169E_OFFSET UNITYSDK_OFFSET(0x1FAD0E0)
#define F07EA273566FF9D0_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1FAD150)
#define F07EA273566FF9D0_F9E9F03727C1CA34_OFFSET UNITYSDK_OFFSET(0x1FAD070)
#define F07EA273566FF9D0__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int F07EA273566FF9D0_TypeDefinitionIndex = 7944;

class F07EA273566FF9D0 : public ::EFC4AEA2121EC272
{
public:
	::System::UInt32 B424ECCB5F808A98; // 0x80
	::System::Byte _padding0[0x4];
	::ABC::UI::MonoButton* B7E14F5B348DAA31; // 0x88
	::ABC::UI::MonoButton* AF12B34253CF616A; // 0x90
	::UnityEngine::UI::Image* B1C90912248FE9DF; // 0x98
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0xA0
	::System::Action_1<::System::UInt32>* FF54841012684B6D; // 0xA8
	::System::Action* FE790447A1F032E5; // 0xB0

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* E32DFA894DBD320D)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + F07EA273566FF9D0_A54D936318FAF9E3_OFFSET))(this, E32DFA894DBD320D);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F07EA273566FF9D0__CTOR_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 EA3C9D11E469EAA2, ::System::Action_1<::System::UInt32>* F73104F8E220CCA7, ::System::Action* AA78AA7DB75EADE0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + F07EA273566FF9D0_EC3033C0485522FB_OFFSET))(this, EA3C9D11E469EAA2, F73104F8E220CCA7, AA78AA7DB75EADE0);
	}

	::System::Void F9E9F03727C1CA34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F07EA273566FF9D0_F9E9F03727C1CA34_OFFSET))(this);
	}

	::System::Void B99F81FFF182169E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F07EA273566FF9D0_B99F81FFF182169E_OFFSET))(this);
	}
};
