#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMFLOBEGHNM;
namespace System { class Object; }

#define OMFLOBEGHNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD72FB0)
#define OMFLOBEGHNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD72FE0)
#define OMFLOBEGHNM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD72FF0)

inline static constexpr unsigned int OMFLOBEGHNM___c_TypeDefinitionIndex = 29432;

	class OMFLOBEGHNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22C20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMFLOBEGHNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFLOBEGHNM___C_CTOR_OFFSET))(this);
		}

		::OMFLOBEGHNM* __cctor_b__28_0()
		{
			return ((::OMFLOBEGHNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFLOBEGHNM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
