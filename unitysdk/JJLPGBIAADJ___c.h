#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJLPGBIAADJ;
namespace System { class Object; }

#define JJLPGBIAADJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E761150)
#define JJLPGBIAADJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E761190)
#define JJLPGBIAADJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7611A0)

inline static constexpr unsigned int JJLPGBIAADJ___c_TypeDefinitionIndex = 27131;

	class JJLPGBIAADJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJLPGBIAADJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLPGBIAADJ___C_CTOR_OFFSET))(this);
		}

		::JJLPGBIAADJ* __cctor_b__23_0()
		{
			return ((::JJLPGBIAADJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLPGBIAADJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
