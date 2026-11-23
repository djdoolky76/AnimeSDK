#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FE31BE81CCA49221.h"
#include "unitysdk/System/Threading/A541F5CB431399F1.h"

namespace System { class String; }

#define EBF79E141F36EFF4_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x3D037A0)
#define EBF79E141F36EFF4_FFC8F57E8D4599A9_OFFSET UNITYSDK_OFFSET(0x3D03800)
#define EBF79E141F36EFF4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D03860)
#define EBF79E141F36EFF4__CTOR_OFFSET UNITYSDK_OFFSET(0x3D03880)

inline static constexpr unsigned int EBF79E141F36EFF4_TypeDefinitionIndex = 10835;

class EBF79E141F36EFF4 : public ::FE31BE81CCA49221
{
public:
	::System::Boolean FFC8F57E8D4599A9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBF79E141F36EFF4_FFC8F57E8D4599A9_OFFSET))(this);
	}

	::System::Void _ctor(::System::Boolean B15BDE327D1D6808, ::System::Threading::A541F5CB431399F1 A84D57260767D5BD, ::System::String* F79B4D487F303AB2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Threading::A541F5CB431399F1, ::System::String*))((::PBYTE)hIl2Cpp + EBF79E141F36EFF4__CTOR_OFFSET))(this, B15BDE327D1D6808, A84D57260767D5BD, F79B4D487F303AB2);
	}

	::System::Boolean F0D2AFBD3CAE7F65()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBF79E141F36EFF4_F0D2AFBD3CAE7F65_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Boolean B15BDE327D1D6808, ::System::Threading::A541F5CB431399F1 A84D57260767D5BD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Threading::A541F5CB431399F1))((::PBYTE)hIl2Cpp + EBF79E141F36EFF4__CTOR_1_OFFSET))(this, B15BDE327D1D6808, A84D57260767D5BD);
	}
};
