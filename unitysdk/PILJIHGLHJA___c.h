#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PILJIHGLHJA;
namespace System { class Object; }

#define PILJIHGLHJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6C9F0)
#define PILJIHGLHJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6CA30)
#define PILJIHGLHJA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF6CA40)

inline static constexpr unsigned int PILJIHGLHJA___c_TypeDefinitionIndex = 31120;

	class PILJIHGLHJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PILJIHGLHJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PILJIHGLHJA___C_CTOR_OFFSET))(this);
		}

		::PILJIHGLHJA* __cctor_b__23_0()
		{
			return ((::PILJIHGLHJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PILJIHGLHJA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
