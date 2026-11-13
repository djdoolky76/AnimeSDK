#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKEBEAKOHJJ;
namespace System { class Object; }

#define JKEBEAKOHJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF39760)
#define JKEBEAKOHJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF397A0)
#define JKEBEAKOHJJ___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1FF397B0)

inline static constexpr unsigned int JKEBEAKOHJJ___c_TypeDefinitionIndex = 31527;

	class JKEBEAKOHJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKEBEAKOHJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEBEAKOHJJ___C_CTOR_OFFSET))(this);
		}

		::JKEBEAKOHJJ* __cctor_b__53_0()
		{
			return ((::JKEBEAKOHJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEBEAKOHJJ___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
