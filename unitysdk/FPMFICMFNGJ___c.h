#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPMFICMFNGJ;
namespace System { class Object; }

#define FPMFICMFNGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DFD40)
#define FPMFICMFNGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DFD70)
#define FPMFICMFNGJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3DFD80)

inline static constexpr unsigned int FPMFICMFNGJ___c_TypeDefinitionIndex = 34303;

	class FPMFICMFNGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FA10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPMFICMFNGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMFICMFNGJ___C_CTOR_OFFSET))(this);
		}

		::FPMFICMFNGJ* __cctor_b__18_0()
		{
			return ((::FPMFICMFNGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMFICMFNGJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
