#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LONLDLLKGFH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x151B4C20)
#define LONLDLLKGFH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x151B4E40)
#define LONLDLLKGFH_FNLFEMHNFEF_OFFSET UNITYSDK_OFFSET(0x151B4F40)
#define LONLDLLKGFH_KGNNONHDDMA_1_OFFSET UNITYSDK_OFFSET(0x151B5210)
#define LONLDLLKGFH_KGNNONHDDMA_OFFSET UNITYSDK_OFFSET(0x151B51B0)
#define LONLDLLKGFH__CTOR_OFFSET UNITYSDK_OFFSET(0x151B4C10)

inline static constexpr unsigned int LONLDLLKGFH_TypeDefinitionIndex = 74965;

class LONLDLLKGFH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Double>** StaticGet_AAGEEJEJCEA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(LONLDLLKGFH_TypeDefinitionIndex)->GetStaticField(0x484C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLDLLKGFH__CTOR_OFFSET))(this);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LONLDLLKGFH_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + LONLDLLKGFH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Double FNLFEMHNFEF(::System::Int32 KHNJNPEIFFF)
	{
		return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + LONLDLLKGFH_FNLFEMHNFEF_OFFSET))(KHNJNPEIFFF);
	}

	static ::System::Double KGNNONHDDMA(::System::Single FOIKIGDJLKN)
	{
		return ((::System::Double(*)(::System::Single))((::PBYTE)hIl2Cpp + LONLDLLKGFH_KGNNONHDDMA_OFFSET))(FOIKIGDJLKN);
	}

	static ::System::Double KGNNONHDDMA_1(::System::Double FOIKIGDJLKN)
	{
		return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + LONLDLLKGFH_KGNNONHDDMA_1_OFFSET))(FOIKIGDJLKN);
	}
};
