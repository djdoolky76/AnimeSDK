#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBDBODNJACD;
namespace System { class Object; }

#define OBDBODNJACD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBACA80)
#define OBDBODNJACD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBACAC0)
#define OBDBODNJACD___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1EBACAD0)

inline static constexpr unsigned int OBDBODNJACD___c_TypeDefinitionIndex = 27992;

	class OBDBODNJACD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBDBODNJACD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD___C_CTOR_OFFSET))(this);
		}

		::OBDBODNJACD* __cctor_b__48_0()
		{
			return ((::OBDBODNJACD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
