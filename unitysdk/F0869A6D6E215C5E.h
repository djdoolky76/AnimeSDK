#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F0869A6D6E215C5E_EE7E28C438AA3604.h"
#include "unitysdk/F0869A6D6E215C5E_F2C66747C5AEE2D8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define F0869A6D6E215C5E_E1BF783A51E10C90_OFFSET UNITYSDK_OFFSET(0x2A7C330)
#define F0869A6D6E215C5E_E8E4954A647A28FF_OFFSET UNITYSDK_OFFSET(0x2A7BBB0)
#define F0869A6D6E215C5E_F1CA1B7A38377927_OFFSET UNITYSDK_OFFSET(0x2A7BFC0)
#define F0869A6D6E215C5E_F2E63BF668874442_OFFSET UNITYSDK_OFFSET(0x2A7C2F0)
#define F0869A6D6E215C5E_F3359BCDEC1C58E2_OFFSET UNITYSDK_OFFSET(0x2A7BCC0)
#define F0869A6D6E215C5E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F0869A6D6E215C5E_TypeDefinitionIndex = 18437;

class F0869A6D6E215C5E : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_AF8FFC776C68B0F6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(F0869A6D6E215C5E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::F0869A6D6E215C5E_F2C66747C5AEE2D8* StaticGet_FB56C178DE9AE556()
	{
		return (::F0869A6D6E215C5E_F2C66747C5AEE2D8*)Il2CppClass::FromTypeDefinitionIndex(F0869A6D6E215C5E_TypeDefinitionIndex)->GetStaticField(0x4);
	}
	static ::System::Single* StaticGet_A59EED9CD4A8593A()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(F0869A6D6E215C5E_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Int32* StaticGet_ACE63E86B6837077()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(F0869A6D6E215C5E_TypeDefinitionIndex)->GetStaticField(0xC);
	}
	static ::System::Boolean* StaticGet_A64CE25B53BBD1E4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(F0869A6D6E215C5E_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Object*>** StaticGet_F31445AAA0D19D45()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(F0869A6D6E215C5E_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::F0869A6D6E215C5E_EE7E28C438AA3604* StaticGet_ED4826B9D9A35593()
	{
		return (::F0869A6D6E215C5E_EE7E28C438AA3604*)Il2CppClass::FromTypeDefinitionIndex(F0869A6D6E215C5E_TypeDefinitionIndex)->GetStaticField(0x20);
	}

	static ::F0869A6D6E215C5E_F2C66747C5AEE2D8 F2E63BF668874442()
	{
		return ((::F0869A6D6E215C5E_F2C66747C5AEE2D8(*)())((::PBYTE)hIl2Cpp + F0869A6D6E215C5E_F2E63BF668874442_OFFSET))();
	}

	static ::UnityEngine::Vector3 F3359BCDEC1C58E2(::UnityEngine::Transform* F249A74E7BFBE1A7)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + F0869A6D6E215C5E_F3359BCDEC1C58E2_OFFSET))(F249A74E7BFBE1A7);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0869A6D6E215C5E__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::Quaternion F1CA1B7A38377927(::UnityEngine::Transform* F249A74E7BFBE1A7)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + F0869A6D6E215C5E_F1CA1B7A38377927_OFFSET))(F249A74E7BFBE1A7);
	}

	static ::System::Boolean E1BF783A51E10C90()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + F0869A6D6E215C5E_E1BF783A51E10C90_OFFSET))();
	}

	static ::System::Void E8E4954A647A28FF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F0869A6D6E215C5E_E8E4954A647A28FF_OFFSET))();
	}
};
