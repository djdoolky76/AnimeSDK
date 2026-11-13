#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNMNOBGOFJD;
namespace System { class Object; }

#define MNMNOBGOFJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF08A00)
#define MNMNOBGOFJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF08A40)
#define MNMNOBGOFJD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF08A50)

inline static constexpr unsigned int MNMNOBGOFJD___c_TypeDefinitionIndex = 29974;

	class MNMNOBGOFJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNMNOBGOFJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMNOBGOFJD___C_CTOR_OFFSET))(this);
		}

		::MNMNOBGOFJD* __cctor_b__23_0()
		{
			return ((::MNMNOBGOFJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMNOBGOFJD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
