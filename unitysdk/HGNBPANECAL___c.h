#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGNBPANECAL;
namespace System { class Object; }

#define HGNBPANECAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5846A0)
#define HGNBPANECAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5846D0)
#define HGNBPANECAL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5846E0)

inline static constexpr unsigned int HGNBPANECAL___c_TypeDefinitionIndex = 33945;

	class HGNBPANECAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGNBPANECAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL___C_CTOR_OFFSET))(this);
		}

		::HGNBPANECAL* __cctor_b__28_0()
		{
			return ((::HGNBPANECAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
