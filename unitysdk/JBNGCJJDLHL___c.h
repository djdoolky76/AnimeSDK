#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBNGCJJDLHL;
namespace System { class Object; }

#define JBNGCJJDLHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6CE720)
#define JBNGCJJDLHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CE750)
#define JBNGCJJDLHL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E6CE760)

inline static constexpr unsigned int JBNGCJJDLHL___c_TypeDefinitionIndex = 32439;

	class JBNGCJJDLHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBNGCJJDLHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNGCJJDLHL___C_CTOR_OFFSET))(this);
		}

		::JBNGCJJDLHL* __cctor_b__38_0()
		{
			return ((::JBNGCJJDLHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNGCJJDLHL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
