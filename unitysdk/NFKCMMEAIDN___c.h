#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFKCMMEAIDN;
namespace System { class Object; }

#define NFKCMMEAIDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD63A0)
#define NFKCMMEAIDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD63E0)
#define NFKCMMEAIDN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAD63F0)

inline static constexpr unsigned int NFKCMMEAIDN___c_TypeDefinitionIndex = 26934;

	class NFKCMMEAIDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFKCMMEAIDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKCMMEAIDN___C_CTOR_OFFSET))(this);
		}

		::NFKCMMEAIDN* __cctor_b__28_0()
		{
			return ((::NFKCMMEAIDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKCMMEAIDN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
