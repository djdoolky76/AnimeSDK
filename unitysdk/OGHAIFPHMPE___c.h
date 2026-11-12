#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGHAIFPHMPE;
namespace System { class Object; }

#define OGHAIFPHMPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0F8E10)
#define OGHAIFPHMPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0F8E50)
#define OGHAIFPHMPE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F0F8E60)

inline static constexpr unsigned int OGHAIFPHMPE___c_TypeDefinitionIndex = 25533;

	class OGHAIFPHMPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGHAIFPHMPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAIFPHMPE___C_CTOR_OFFSET))(this);
		}

		::OGHAIFPHMPE* __cctor_b__38_0()
		{
			return ((::OGHAIFPHMPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAIFPHMPE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
