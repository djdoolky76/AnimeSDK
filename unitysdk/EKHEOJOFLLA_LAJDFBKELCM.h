#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKHEOJOFLLA;
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define EKHEOJOFLLA_LAJDFBKELCM_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1711BA40)
#define EKHEOJOFLLA_LAJDFBKELCM_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x1711BBF0)
#define EKHEOJOFLLA_LAJDFBKELCM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1711B970)

inline static constexpr unsigned int EKHEOJOFLLA_LAJDFBKELCM_TypeDefinitionIndex = 62645;

class EKHEOJOFLLA_LAJDFBKELCM : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<::EKHEOJOFLLA*>** StaticGet_IDALCPMPBBG()
	{
		return (::System::Collections::Generic::Stack_1<::EKHEOJOFLLA*>**)Il2CppClass::FromTypeDefinitionIndex(EKHEOJOFLLA_LAJDFBKELCM_TypeDefinitionIndex)->GetStaticField(0x45FE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKHEOJOFLLA_LAJDFBKELCM__CCTOR_OFFSET))();
	}

	static ::EKHEOJOFLLA* BBPCBEEHALC()
	{
		return ((::EKHEOJOFLLA*(*)())((::PBYTE)hIl2Cpp + EKHEOJOFLLA_LAJDFBKELCM_BBPCBEEHALC_OFFSET))();
	}

	static ::System::Void MBKDOMFJFIG(::EKHEOJOFLLA* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_LAJDFBKELCM_MBKDOMFJFIG_OFFSET))(ECMMKCJLBMD);
	}
};
