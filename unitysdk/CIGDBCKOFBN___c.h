#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIGDBCKOFBN;
namespace System { class Object; }

#define CIGDBCKOFBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D2730)
#define CIGDBCKOFBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D2760)
#define CIGDBCKOFBN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0D2770)

inline static constexpr unsigned int CIGDBCKOFBN___c_TypeDefinitionIndex = 33192;

	class CIGDBCKOFBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIGDBCKOFBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGDBCKOFBN___C_CTOR_OFFSET))(this);
		}

		::CIGDBCKOFBN* __cctor_b__28_0()
		{
			return ((::CIGDBCKOFBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGDBCKOFBN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
