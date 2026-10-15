#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJCGOCNMJIN;
namespace System { class Object; }

#define IJCGOCNMJIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E663F50)
#define IJCGOCNMJIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E663F80)
#define IJCGOCNMJIN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E663F90)

inline static constexpr unsigned int IJCGOCNMJIN___c_TypeDefinitionIndex = 31581;

	class IJCGOCNMJIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJCGOCNMJIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCGOCNMJIN___C_CTOR_OFFSET))(this);
		}

		::IJCGOCNMJIN* __cctor_b__18_0()
		{
			return ((::IJCGOCNMJIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCGOCNMJIN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
