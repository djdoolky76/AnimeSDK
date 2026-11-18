#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMHOLJNNCJA_PJJIMDAOJCJ;
class EHOFCIGBFBA;
class FAKLNMJEGOJ;
namespace System { template <typename T> class Action_1; }

#define EHOFCIGBFBA_CDJADIIKNJF_NMMLKMDFCAI_OFFSET UNITYSDK_OFFSET(0x158AF470)
#define EHOFCIGBFBA_CDJADIIKNJF__CTOR_OFFSET UNITYSDK_OFFSET(0x158AF460)

inline static constexpr unsigned int EHOFCIGBFBA_CDJADIIKNJF_TypeDefinitionIndex = 52213;

class EHOFCIGBFBA_CDJADIIKNJF : public ::System::Object
{
public:
	::EHOFCIGBFBA* KLHPEBKNIFB; // 0x10
	::DMHOLJNNCJA_PJJIMDAOJCJ* GLHOHNAFMIG; // 0x18
	::System::Action_1<::System::Object*>* ICDMFFFBDAO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_CDJADIIKNJF__CTOR_OFFSET))(this);
	}

	::System::Void NMMLKMDFCAI(::System::Int32 HBJOLKHGGDD, ::FAKLNMJEGOJ* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FAKLNMJEGOJ*))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_CDJADIIKNJF_NMMLKMDFCAI_OFFSET))(this, HBJOLKHGGDD, IPMMCGDMODG);
	}
};
