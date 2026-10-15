#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GALCNKIAHNN;
namespace System { class Object; }

#define GALCNKIAHNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E421910)
#define GALCNKIAHNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E421950)
#define GALCNKIAHNN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E421960)

inline static constexpr unsigned int GALCNKIAHNN___c_TypeDefinitionIndex = 31041;

	class GALCNKIAHNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GALCNKIAHNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GALCNKIAHNN___C_CTOR_OFFSET))(this);
		}

		::GALCNKIAHNN* __cctor_b__28_0()
		{
			return ((::GALCNKIAHNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GALCNKIAHNN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
