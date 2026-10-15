#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define IAHCDBNIDNG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E018B0)
#define IAHCDBNIDNG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15E018F0)
#define IAHCDBNIDNG___C__CREATERECOMMENDITEMS_B__2_0_OFFSET UNITYSDK_OFFSET(0x15E01900)
#define IAHCDBNIDNG___C__CREATERECOMMENDITEMS_B__2_1_OFFSET UNITYSDK_OFFSET(0x15E019A0)

inline static constexpr unsigned int IAHCDBNIDNG___c_TypeDefinitionIndex = 65569;

	class IAHCDBNIDNG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37D90);
		}

		static ::System::Func_1<::System::String*>** StaticGet___9__2_0()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37D98);
		}

		static ::System::Func_1<::System::String*>** StaticGet___9__2_1()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAHCDBNIDNG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHCDBNIDNG___C_CTOR_OFFSET))(this);
		}

		::System::String* _CreateRecommendItems_b__2_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHCDBNIDNG___C__CREATERECOMMENDITEMS_B__2_0_OFFSET))(this);
		}

		::System::String* _CreateRecommendItems_b__2_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHCDBNIDNG___C__CREATERECOMMENDITEMS_B__2_1_OFFSET))(this);
		}

	};
