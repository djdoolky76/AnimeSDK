#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHKJGJNKIK;
namespace System { class Object; }

#define GHHKJGJNKIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E489D70)
#define GHHKJGJNKIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E489DB0)
#define GHHKJGJNKIK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E489DC0)

	class GHHKJGJNKIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHHKJGJNKIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHKJGJNKIK___C_CTOR_OFFSET))(this);
		}

		::GHHKJGJNKIK* __cctor_b__28_0()
		{
			return ((::GHHKJGJNKIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHKJGJNKIK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
