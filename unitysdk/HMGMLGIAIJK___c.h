#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMGMLGIAIJK;
namespace System { class Object; }

#define HMGMLGIAIJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A1A30)
#define HMGMLGIAIJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A1A70)
#define HMGMLGIAIJK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5A1A80)

inline static constexpr unsigned int HMGMLGIAIJK___c_TypeDefinitionIndex = 30131;

	class HMGMLGIAIJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMGMLGIAIJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGMLGIAIJK___C_CTOR_OFFSET))(this);
		}

		::HMGMLGIAIJK* __cctor_b__23_0()
		{
			return ((::HMGMLGIAIJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGMLGIAIJK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
