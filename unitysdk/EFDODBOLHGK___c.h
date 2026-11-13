#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFDODBOLHGK;
namespace System { class Object; }

#define EFDODBOLHGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204943C0)
#define EFDODBOLHGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20494400)
#define EFDODBOLHGK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20494410)

inline static constexpr unsigned int EFDODBOLHGK___c_TypeDefinitionIndex = 30266;

	class EFDODBOLHGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFDODBOLHGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDODBOLHGK___C_CTOR_OFFSET))(this);
		}

		::EFDODBOLHGK* __cctor_b__23_0()
		{
			return ((::EFDODBOLHGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDODBOLHGK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
