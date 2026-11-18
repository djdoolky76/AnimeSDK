#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FEPCPAOJGKI;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLKKLCIKDDM_MJJACDOMLLH_BFDJDJBHDMC_OFFSET UNITYSDK_OFFSET(0x11C59AD0)
#define FLKKLCIKDDM_MJJACDOMLLH__CTOR_OFFSET UNITYSDK_OFFSET(0x11C59AC0)

inline static constexpr unsigned int FLKKLCIKDDM_MJJACDOMLLH_TypeDefinitionIndex = 85026;

class FLKKLCIKDDM_MJJACDOMLLH : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::FEPCPAOJGKI*>*>* EJGDHCIBCJH; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::FEPCPAOJGKI*>* ONNFKFBNHMP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKKLCIKDDM_MJJACDOMLLH__CTOR_OFFSET))(this);
	}

	::System::Void BFDJDJBHDMC(::System::Collections::Generic::List_1<::System::Int32>* HJODANHIAHH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FLKKLCIKDDM_MJJACDOMLLH_BFDJDJBHDMC_OFFSET))(this, HJODANHIAHH);
	}
};
