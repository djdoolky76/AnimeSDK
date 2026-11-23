#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E00BCE280C0DEACF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F11DC541C689B986_A66245FDD0182C57_OFFSET UNITYSDK_OFFSET(0x238E7D0)
#define F11DC541C689B986_BA0AFB830600D2A9_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F11DC541C689B986_E2A00B4825318766_OFFSET UNITYSDK_OFFSET(0x238EA70)
#define F11DC541C689B986_F3620DAEC2F930B4_OFFSET UNITYSDK_OFFSET(0x238E9E0)
#define F11DC541C689B986_FE03C1837036B414_OFFSET UNITYSDK_OFFSET(0x238E980)
#define F11DC541C689B986_FEEBF324E07696AB_OFFSET UNITYSDK_OFFSET(0x238EB40)
#define F11DC541C689B986__CCTOR_OFFSET UNITYSDK_OFFSET(0x238EAC0)
#define F11DC541C689B986__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int F11DC541C689B986_TypeDefinitionIndex = 3502;

class F11DC541C689B986 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::F11DC541C689B986*>** StaticGet_FFB79864A01172D0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::F11DC541C689B986*>**)Il2CppClass::FromTypeDefinitionIndex(F11DC541C689B986_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::String* F7B218B1D52B68EE; // 0x10

	::System::UInt32 F3620DAEC2F930B4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + F11DC541C689B986_F3620DAEC2F930B4_OFFSET))(this);
	}

	::System::String* BA0AFB830600D2A9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F11DC541C689B986_BA0AFB830600D2A9_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F11DC541C689B986__CCTOR_OFFSET))();
	}

	::System::Boolean FE03C1837036B414(::E00BCE280C0DEACF* BE2BD4C36127234B)
	{
		return ((::System::Boolean(*)(::PVOID, ::E00BCE280C0DEACF*))((::PBYTE)hIl2Cpp + F11DC541C689B986_FE03C1837036B414_OFFSET))(this, BE2BD4C36127234B);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::F11DC541C689B986*>* FEEBF324E07696AB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::F11DC541C689B986*>*(*)())((::PBYTE)hIl2Cpp + F11DC541C689B986_FEEBF324E07696AB_OFFSET))();
	}

	::System::Void _ctor(::System::String* F79B4D487F303AB2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F11DC541C689B986__CTOR_OFFSET))(this, F79B4D487F303AB2);
	}

	::System::String* E2A00B4825318766()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F11DC541C689B986_E2A00B4825318766_OFFSET))(this);
	}

	static ::F11DC541C689B986* A66245FDD0182C57(::System::String* F79B4D487F303AB2)
	{
		return ((::F11DC541C689B986*(*)(::System::String*))((::PBYTE)hIl2Cpp + F11DC541C689B986_A66245FDD0182C57_OFFSET))(F79B4D487F303AB2);
	}
};
