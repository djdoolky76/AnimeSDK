#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKKOGGOLOCE;
class FBHPDPBIGPK;
class GPKIDAPNOOB;
class OHMDKBCJAJP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKKOGGOLOCE_LGCONNBGBCB_DECODLLKNLN_OFFSET UNITYSDK_OFFSET(0x11A98D70)
#define EKKOGGOLOCE_LGCONNBGBCB__CTOR_OFFSET UNITYSDK_OFFSET(0x11A98D60)

inline static constexpr unsigned int EKKOGGOLOCE_LGCONNBGBCB_TypeDefinitionIndex = 80144;

class EKKOGGOLOCE_LGCONNBGBCB : public ::System::Object
{
public:
	::EKKOGGOLOCE* KLHPEBKNIFB; // 0x10
	::System::Action* FGHOIDFGJHB; // 0x18
	::System::Collections::Generic::List_1<::GPKIDAPNOOB*>* IJAHLLKFJOL; // 0x20
	::OHMDKBCJAJP* GLAOEHCGCFO; // 0x28
	::System::UInt32 FMJPOIFLFOJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKOGGOLOCE_LGCONNBGBCB__CTOR_OFFSET))(this);
	}

	::System::Void DECODLLKNLN(::System::Collections::Generic::List_1<::FBHPDPBIGPK*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*))((::PBYTE)hIl2Cpp + EKKOGGOLOCE_LGCONNBGBCB_DECODLLKNLN_OFFSET))(this, DJLOKMMLFJC);
	}
};
