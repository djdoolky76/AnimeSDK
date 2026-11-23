#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A60213C9E6CB2CF1;
class BFD069C4E3C9878C;
class EBDA1E8754ACD9FC;
class F1C8A76FE26E681F;
class FAE126BD5FE568DD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F2ECCFFC65DCFA9F__CTOR_OFFSET UNITYSDK_OFFSET(0x209B200)

inline static constexpr unsigned int F2ECCFFC65DCFA9F_TypeDefinitionIndex = 8542;

class F2ECCFFC65DCFA9F : public ::System::Object
{
public:
	::BFD069C4E3C9878C* B23A5AEB952EF919; // 0x10
	::FAE126BD5FE568DD* A4B816EA7C01B52E; // 0x18
	::System::Boolean E8E3488E4BE95F99; // 0x20
	::System::Byte _padding0[0x7];
	::A60213C9E6CB2CF1* FAE8423760331C28; // 0x28
	::EBDA1E8754ACD9FC* A27B7C8A55185169; // 0x30
	::System::Collections::Generic::List_1<::F1C8A76FE26E681F*>* E3DF2D6FCC5492F2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2ECCFFC65DCFA9F__CTOR_OFFSET))(this);
	}
};
