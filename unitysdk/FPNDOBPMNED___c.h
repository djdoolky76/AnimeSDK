#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPNDOBPMNED;
namespace System { class Object; }

#define FPNDOBPMNED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6FD230)
#define FPNDOBPMNED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6FD270)
#define FPNDOBPMNED___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F6FD280)

inline static constexpr unsigned int FPNDOBPMNED___c_TypeDefinitionIndex = 34405;

	class FPNDOBPMNED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPNDOBPMNED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNDOBPMNED___C_CTOR_OFFSET))(this);
		}

		::FPNDOBPMNED* __cctor_b__23_0()
		{
			return ((::FPNDOBPMNED*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNDOBPMNED___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
