#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCCIOBKOFJN;
namespace System { class Object; }

#define GCCIOBKOFJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E43AC30)
#define GCCIOBKOFJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E43AC70)
#define GCCIOBKOFJN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E43AC80)

inline static constexpr unsigned int GCCIOBKOFJN___c_TypeDefinitionIndex = 32843;

	class GCCIOBKOFJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEE60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCCIOBKOFJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCIOBKOFJN___C_CTOR_OFFSET))(this);
		}

		::GCCIOBKOFJN* __cctor_b__28_0()
		{
			return ((::GCCIOBKOFJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCIOBKOFJN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
