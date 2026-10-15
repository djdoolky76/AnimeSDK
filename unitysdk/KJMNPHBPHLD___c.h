#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJMNPHBPHLD;
namespace System { class Object; }

#define KJMNPHBPHLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E871690)
#define KJMNPHBPHLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8716D0)
#define KJMNPHBPHLD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8716E0)

inline static constexpr unsigned int KJMNPHBPHLD___c_TypeDefinitionIndex = 30147;

	class KJMNPHBPHLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJMNPHBPHLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMNPHBPHLD___C_CTOR_OFFSET))(this);
		}

		::KJMNPHBPHLD* __cctor_b__28_0()
		{
			return ((::KJMNPHBPHLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMNPHBPHLD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
