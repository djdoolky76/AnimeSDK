#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEA7DCFF70AB4D9F.h"

class A32E68EB584970D3;
class A7028EB385A9BA4F;
class BE08A46D55F3A69F;
class F1CE7CCF4D819D87;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F9552C33450E7A27_A386AB7542C24DF0_OFFSET UNITYSDK_OFFSET(0x17AA8A0)
#define F9552C33450E7A27_E349E3798C5FB29A_OFFSET UNITYSDK_OFFSET(0x17AA900)
#define F9552C33450E7A27__CTOR_OFFSET UNITYSDK_OFFSET(0x17AAA50)

inline static constexpr unsigned int F9552C33450E7A27_TypeDefinitionIndex = 956;

class F9552C33450E7A27 : public ::EEA7DCFF70AB4D9F
{
public:
	::A32E68EB584970D3* A9AD320C67EF394D; // 0x40

	::System::Boolean A386AB7542C24DF0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F9552C33450E7A27_A386AB7542C24DF0_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9552C33450E7A27__CTOR_OFFSET))(this);
	}

	::System::Void E349E3798C5FB29A(::A7028EB385A9BA4F* E7E21918E5222A36, ::F1CE7CCF4D819D87* BBE1F96BD282E2DE, ::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>* AA4078BA47E59342)
	{
		return ((::System::Void(*)(::PVOID, ::A7028EB385A9BA4F*, ::F1CE7CCF4D819D87*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>*))((::PBYTE)hIl2Cpp + F9552C33450E7A27_E349E3798C5FB29A_OFFSET))(this, E7E21918E5222A36, BBE1F96BD282E2DE, AA4078BA47E59342);
	}
};
