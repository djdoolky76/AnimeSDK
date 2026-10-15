#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEFCOCPHIOD;
namespace System { class Object; }

#define EEFCOCPHIOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E266A50)
#define EEFCOCPHIOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E266A90)
#define EEFCOCPHIOD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E266AA0)

inline static constexpr unsigned int EEFCOCPHIOD___c_TypeDefinitionIndex = 30772;

	class EEFCOCPHIOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEFCOCPHIOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFCOCPHIOD___C_CTOR_OFFSET))(this);
		}

		::EEFCOCPHIOD* __cctor_b__33_0()
		{
			return ((::EEFCOCPHIOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFCOCPHIOD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
