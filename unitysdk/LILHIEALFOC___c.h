#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LILHIEALFOC;
namespace System { class Object; }

#define LILHIEALFOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E945050)
#define LILHIEALFOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E945090)
#define LILHIEALFOC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9450A0)

inline static constexpr unsigned int LILHIEALFOC___c_TypeDefinitionIndex = 26183;

	class LILHIEALFOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x382F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LILHIEALFOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LILHIEALFOC___C_CTOR_OFFSET))(this);
		}

		::LILHIEALFOC* __cctor_b__23_0()
		{
			return ((::LILHIEALFOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LILHIEALFOC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
