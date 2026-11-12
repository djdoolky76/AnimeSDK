#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DONCOCHMEBC;
namespace System { class Object; }

#define DONCOCHMEBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4E4220)
#define DONCOCHMEBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E4260)
#define DONCOCHMEBC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F4E4270)

inline static constexpr unsigned int DONCOCHMEBC___c_TypeDefinitionIndex = 28334;

	class DONCOCHMEBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DONCOCHMEBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONCOCHMEBC___C_CTOR_OFFSET))(this);
		}

		::DONCOCHMEBC* __cctor_b__23_0()
		{
			return ((::DONCOCHMEBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONCOCHMEBC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
