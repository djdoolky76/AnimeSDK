#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FB44A8EE635F7557_F277F6EFBC870B19.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define FB44A8EE635F7557_F4F4EBE45C07C16D_A2B5CA3946448E7C_OFFSET UNITYSDK_OFFSET(0x403CE70)
#define FB44A8EE635F7557_F4F4EBE45C07C16D_B45FE056A221644B_OFFSET UNITYSDK_OFFSET(0x17A62C0)
#define FB44A8EE635F7557_F4F4EBE45C07C16D_BAD9BA673B73A720_OFFSET UNITYSDK_OFFSET(0x403CE10)
#define FB44A8EE635F7557_F4F4EBE45C07C16D__CTOR_OFFSET UNITYSDK_OFFSET(0x403CEA0)

inline static constexpr unsigned int FB44A8EE635F7557_F4F4EBE45C07C16D_TypeDefinitionIndex = 20386;

class FB44A8EE635F7557_F4F4EBE45C07C16D : public ::FB44A8EE635F7557_F277F6EFBC870B19
{
public:
	::System::Func_1<::System::Object*>* BA1AA7755B9AE5F4; // 0x48
	::System::Single B4874D65E452E47B; // 0x50
	::System::Byte _padding0[0x4];
	::System::String* A30706FCE5AF29B5; // 0x58

	::System::Func_1<::System::Object*>* B45FE056A221644B()
	{
		return ((::System::Func_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FB44A8EE635F7557_F4F4EBE45C07C16D_B45FE056A221644B_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB44A8EE635F7557_F4F4EBE45C07C16D__CTOR_OFFSET))(this);
	}

	::System::Object* A2B5CA3946448E7C()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FB44A8EE635F7557_F4F4EBE45C07C16D_A2B5CA3946448E7C_OFFSET))(this);
	}

	::System::String* BAD9BA673B73A720(::System::Object* E937D4885DAA1AE8)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FB44A8EE635F7557_F4F4EBE45C07C16D_BAD9BA673B73A720_OFFSET))(this, E937D4885DAA1AE8);
	}
};
