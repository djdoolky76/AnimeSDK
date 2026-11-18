#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KIBDNJAKKPG_PBIPPLJAKKK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KIBDNJAKKPG_LOMGHGNOKLK_OFFSET UNITYSDK_OFFSET(0x1A2CC830)
#define KIBDNJAKKPG_MBHJJNFNGPE_OFFSET UNITYSDK_OFFSET(0x1A2CC980)
#define KIBDNJAKKPG_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1A2CC7D0)
#define KIBDNJAKKPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CC740)

inline static constexpr unsigned int KIBDNJAKKPG_TypeDefinitionIndex = 53927;

class KIBDNJAKKPG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* MEOHKIGFMDL; // 0x10
	::System::Single IOJAIGNFBON; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBDNJAKKPG__CTOR_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single CCGEHOFIMCE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIBDNJAKKPG_OKJCHFGIKBH_OFFSET))(this, CCGEHOFIMCE);
	}

	::System::Single LOMGHGNOKLK(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIBDNJAKKPG_LOMGHGNOKLK_OFFSET))(this, MCOHLHMKLIP);
	}

	::KIBDNJAKKPG_PBIPPLJAKKK* MBHJJNFNGPE(::System::String* MCOHLHMKLIP, ::System::Object* HFMHOELKCAJ)
	{
		return ((::KIBDNJAKKPG_PBIPPLJAKKK*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + KIBDNJAKKPG_MBHJJNFNGPE_OFFSET))(this, MCOHLHMKLIP, HFMHOELKCAJ);
	}
};
